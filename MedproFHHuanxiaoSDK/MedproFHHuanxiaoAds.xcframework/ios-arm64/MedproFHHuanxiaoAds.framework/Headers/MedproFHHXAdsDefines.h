//
//  MedproFHHXAdsDefines.h
//  MedproFHHuanxiaoAds
//
//  Copyright © 2026 Huanxiao Technology Co., Ltd. All rights reserved.
//
//  SDK 常量定义
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


#pragma mark - 版本信息
/**
 * @brief SDK 版本号
 * @discussion 格式: 主版本.次版本.修订版本
 */
static NSString * const MedproFHHXAdsSDKVersion = @"1.5.11";

/**
 * @brief SDK 错误域
 * @discussion 用于标识 SDK 产生的 NSError
 */
static NSString * const MedproFHHXAdsErrorDomain = @"com.medprofh.huanxiao.ads.error";


#pragma mark - 错误码
/**
 * @enum MedproFHHXAdsErrorCode
 * @brief SDK 错误码定义
 *
 * @discussion
 * 错误码规则：
 * - 0: 成功
 * - 1xxx: 初始化相关错误
 * - 2xxx: 网络相关错误
 * - 3xxx: 广告相关错误
 */
typedef NS_ENUM(NSInteger, MedproFHHXAdsErrorCode) {
    
    /// 成功（无错误）
    MedproFHHXAdsErrorCodeSuccess = 0,
    
    // ======================== 1xxx 初始化错误 ========================
    
    /**
     * @brief SDK 未初始化
     * @discussion 调用广告接口前需要先初始化 SDK
     */
    MedproFHHXAdsErrorCodeSDKNotInitialized = 1001,
    
    /**
     * @brief AppID 为空
     * @discussion 初始化时未传入 AppID 或传入空字符串
     */
    MedproFHHXAdsErrorCodeAppIDEmpty = 1002,
    
    /**
     * @brief AppID 无效
     * @discussion 服务端校验 AppID 格式或签名失败
     */
    MedproFHHXAdsErrorCodeAppIDInvalid = 1003,
    
    /**
     * @brief AppID 不存在
     * @discussion 该 AppID 在服务端未注册，请检查后台配置
     */
    MedproFHHXAdsErrorCodeAppIDNotExist = 1004,

    /**
     * @brief 当前系统版本不受支持
     * @discussion SDK 功能需要 iOS 13.0 或更高版本；较低版本会安全地初始化失败
     */
    MedproFHHXAdsErrorCodeUnsupportedOS = 1005,
    
    /**
     * @brief 初始化失败（通用）
     * @discussion 其他初始化错误
     */
    MedproFHHXAdsErrorCodeInitFailed = 1099,
    
    // ======================== 2xxx 网络错误 ========================
    
    /**
     * @brief 网络请求失败
     * @discussion 网络连接异常或请求被拒绝
     */
    MedproFHHXAdsErrorCodeNetworkError = 2001,
    
    /**
     * @brief 网络超时
     * @discussion 请求超时，请检查网络连接
     */
    MedproFHHXAdsErrorCodeNetworkTimeout = 2002,
    
    /**
     * @brief 服务器错误
     * @discussion 服务端返回错误状态码（如 5xx）
     */
    MedproFHHXAdsErrorCodeServerError = 2003,
    
    /**
     * @brief 响应解析失败
     * @discussion 服务端返回的数据格式异常
     */
    MedproFHHXAdsErrorCodeParseError = 2004,
    
    // ======================== 3xxx 广告错误 ========================
    
    /**
     * @brief 广告加载失败
     * @discussion 广告请求失败或返回数据异常
     */
    MedproFHHXAdsErrorCodeAdLoadFailed = 3001,
    
    /**
     * @brief 无广告填充
     * @discussion 当前无可用广告，请稍后重试
     */
    MedproFHHXAdsErrorCodeNoAdFill = 3002,
    
    /**
     * @brief 广告已过期
     * @discussion 广告缓存已过期，请重新请求
     */
    MedproFHHXAdsErrorCodeAdExpired = 3003,
    
    /**
     * @brief 广告展示失败
     * @discussion 广告展示时发生错误（如视图问题）
     */
    MedproFHHXAdsErrorCodeAdShowFailed = 3004,
    
    /**
     * @brief 广告位 ID 为空
     * @discussion 请求广告时未传入广告位 ID
     */
    MedproFHHXAdsErrorCodeAdSpotIDEmpty = 3005,
    
    /**
     * @brief 展示窗口为空
     * @discussion 展示广告时传入的 window 为 nil
     */
    MedproFHHXAdsErrorCodeWindowEmpty = 3006,
    
    /**
     * @brief 展示视图控制器为空
     * @discussion 展示广告时传入的 viewController 为 nil
     */
    MedproFHHXAdsErrorCodeViewControllerEmpty = 3013,
    
    /**
     * @brief 广告数据无效
     * @discussion 广告数据解析失败或数据不完整
     */
    MedproFHHXAdsErrorCodeAdDataInvalid = 3007,
    
    /**
     * @brief 广告加载超时
     * @discussion 广告加载超过设定的超时时间
     */
    MedproFHHXAdsErrorCodeAdLoadTimeout = 3008,
    
    /**
     * @brief 模板不支持
     * @discussion 当前广告模板类型不被支持（如视频模板暂未实现）
     */
    MedproFHHXAdsErrorCodeTemplateNotSupported = 3009,
    
    /**
     * @brief 广告类型不匹配
     * @discussion 返回的广告类型与请求的广告位类型不一致
     */
    MedproFHHXAdsErrorCodeAdTypeMismatch = 3010,
    
    /**
     * @brief 内部错误
     * @discussion SDK 内部异常
     */
    MedproFHHXAdsErrorCodeInternalError = 3099,
};
#pragma mark - 初始化状态
/**
 * @enum MedproFHHXAdsInitializationStatus
 * @brief SDK 初始化状态
 *
 * @discussion
 * 通过 `[MedproFHHXAdsSDK sharedInstance].initializationStatus` 获取当前状态
 */
typedef NS_ENUM(NSInteger, MedproFHHXAdsInitializationStatus) {
    
    /**
     * @brief 未开始初始化
     * @discussion SDK 尚未调用初始化方法
     */
    MedproFHHXAdsInitializationStatusNotStarted = 0,
    
    /**
     * @brief 初始化中
     * @discussion SDK 正在进行初始化，请等待完成
     */
    MedproFHHXAdsInitializationStatusInitializing = 1,
    
    /**
     * @brief 初始化成功
     * @discussion SDK 已就绪，可以请求广告
     */
    MedproFHHXAdsInitializationStatusReady = 2,
    
    /**
     * @brief 初始化失败
     * @discussion SDK 初始化失败（不可重试的错误，如 AppID 无效），请检查错误信息后重试
     */
    MedproFHHXAdsInitializationStatusFailed = 3,

    /**
     * @brief 初始化等待中
     * @discussion 首次网络请求未能完成（如首次安装等待网络授权），SDK 将在网络恢复后自动重试。
     *            此状态下调用广告加载方法会自动排队，初始化成功后按序执行。
     */
    MedproFHHXAdsInitializationStatusPending = 4,
};


#pragma mark - 广告类型
/**
 * @enum MedproFHHXAdType
 * @brief 广告类型
 */
typedef NS_ENUM(NSInteger, MedproFHHXAdType) {
    MedproFHHXAdTypeNative = 1,         /// 原生（信息流）广告
    MedproFHHXAdTypeSplash = 2,         /// 开屏广告
    MedproFHHXAdTypeInterstitial = 3,   /// 插屏广告
    MedproFHHXAdTypeRewardVideo = 4,    /// 激励视频广告
};

#pragma mark - 日志级别
/**
 * @enum MedproFHHXAdsLogLevel
 * @brief 日志级别
 *
 * @discussion
 * 控制 SDK 日志输出的详细程度。仅在 DEBUG 模式下有效。
 */
typedef NS_ENUM(NSInteger, MedproFHHXAdsLogLevel) {
    
    /// 不输出日志
    MedproFHHXAdsLogLevelNone = 0,
    
    /// 仅输出错误日志
    MedproFHHXAdsLogLevelError = 1,
    
    /// 输出警告及错误日志
    MedproFHHXAdsLogLevelWarning = 2,
    
    /// 输出信息、警告及错误日志
    MedproFHHXAdsLogLevelInfo = 3,
    
    /// 输出全部日志（包括调试信息）
    MedproFHHXAdsLogLevelDebug = 4,
};


#pragma mark - 回调定义
/**
 * @typedef MedproFHHXAdsInitializationCompletionHandler
 * @brief 初始化完成回调
 *
 * @param success 是否成功
 * @param error 失败时的错误信息，成功时为 nil
 *
 * @discussion 回调始终在主线程执行
 */
typedef void(^MedproFHHXAdsInitializationCompletionHandler)(BOOL success, NSError * _Nullable error);

NS_ASSUME_NONNULL_END
