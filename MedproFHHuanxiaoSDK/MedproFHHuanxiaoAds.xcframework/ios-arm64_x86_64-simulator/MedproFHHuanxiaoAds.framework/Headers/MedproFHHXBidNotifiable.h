//
//  HXBidNotifiable.h
//  HuanxiaoAds
//
//  Copyright © 2026 Huanxiao Technology Co., Ltd. All rights reserved.
//
//  竞价结果通知协议
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - 竞价失败原因

/**
 * @enum HXBidLossReason
 * @brief 竞价失败原因码
 *
 * @constant HXBidLossReasonPriceFilter       1001 底价过滤
 * @constant HXBidLossReasonLowBid            1002 bid 价格低于最高价
 * @constant HXBidLossReasonBlacklistFilter   1003 素材黑名单过滤
 * @constant HXBidLossReasonCompeteFilter     1004 竞品过滤
 * @constant HXBidLossReasonTimeout           1005 超时过滤
 * @constant HXBidLossReasonOther             1006 其它
 */
typedef NS_ENUM(NSInteger, MedproFHHXBidLossReason) {
    MedproFHHXBidLossReasonPriceFilter     = 1001,
    MedproFHHXBidLossReasonLowBid          = 1002,
    MedproFHHXBidLossReasonBlacklistFilter = 1003,
    MedproFHHXBidLossReasonCompeteFilter   = 1004,
    MedproFHHXBidLossReasonTimeout         = 1005,
    MedproFHHXBidLossReasonOther           = 1006,
};

#pragma mark - 竞价胜出者

/**
 * @brief 竞价胜出者标识
 *
 * CSJ      穿山甲/头条
 * GDT      优量汇/广点通
 * KUAISHOU 快手
 * BAIDU    百青藤/百度
 * SIGMOB   Sigmob
 * OPPO     OPPO
 * VIVO     vivo
 * HUAWEI   华为
 * XIAOMI   小米
 * TAKU     Taku
 * JD       京东
 * OTHER    其他
 */
extern NSString *const MedproFHkHXWinBidderCSJ;
extern NSString *const MedproFHkHXWinBidderGDT;
extern NSString *const MedproFHkHXWinBidderKUAISHOU;
extern NSString *const MedproFHkHXWinBidderBAIDU;
extern NSString *const MedproFHkHXWinBidderSIGMOB;
extern NSString *const MedproFHkHXWinBidderOPPO;
extern NSString *const MedproFHkHXWinBidderVIVO;
extern NSString *const MedproFHkHXWinBidderHUAWEI;
extern NSString *const MedproFHkHXWinBidderXIAOMI;
extern NSString *const MedproFHkHXWinBidderTAKU;
extern NSString *const MedproFHkHXWinBidderJD;
extern NSString *const MedproFHkHXWinBidderOTHER;

#pragma mark - 竞价结果通知协议

/**
 * @protocol HXBidNotifiable
 * @brief 竞价结果通知协议
 *
 * @discussion
 * 聚合平台会回调竞价结果（胜出/失败）。
 * 媒体应调用此协议方法通知 SDK。
 *
 * 支持的广告类型：开屏、信息流、插屏、激励视频。
 */
@protocol MedproFHHXBidNotifiable <NSObject>

/**
 * @brief 通知 SDK 竞价胜出
 *
 * @param price       结算价格（分/CPM）
 * @param secondPrice 二次出价（分/CPM），无则传 0
 */
- (void)sendWinNotificationWithPrice:(NSUInteger)price
                         secondPrice:(NSUInteger)secondPrice;

/**
 * @brief 通知 SDK 竞价失败
 *
 * @param lossReason   失败原因码，参见 @c HXBidLossReason
 * @param winnerBidder 胜出方标识，参见 @c kHXWinBidder* 常量，未知可传 nil
 * @param winnerPrice  胜出方出价（分/CPM），未知传 0
 */
- (void)sendLossNotificationWithLossReason:(MedproFHHXBidLossReason)lossReason
                               winnerBidder:(nullable NSString *)winnerBidder
                               winnerPrice:(NSUInteger)winnerPrice;

@end

NS_ASSUME_NONNULL_END
