//
//  MedproFHHXMediaView.h
//  MedproFHHuanxiaoAds
//
//  Copyright © 2026 Huanxiao Technology Co., Ltd. All rights reserved.
//
//  自渲染视频广告播放视图
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, MedproFHHXVideoShowModel) {
    MedproFHHXVideoShowModelResize,         // 拉伸填充
    MedproFHHXVideoShowModelResizeAspect,   // 保持比例（可能有黑边）
    MedproFHHXVideoShowModelResizeFill,     // 保持比例填充（可能裁切）
};

@protocol MedproFHHXMediaViewDelegate;

@interface MedproFHHXMediaView : UIView

//  视频的显示模式，默认 MedproFHHXVideoShowModelResizeAspect
@property (nonatomic, assign) MedproFHHXVideoShowModel showModel;
//  声音控制视图，外部可以改变 frame。width / height = 1:1
@property (nonatomic, strong, readonly) UIView *voiceControlView;
//  控制视频的音量控制按钮是否展示（默认不展示）
@property (nonatomic, assign) BOOL isHiddenVoiceButton;
//  是否正在播放
@property (nonatomic, assign, readonly) BOOL isPlaying;
//  是否静音了
@property (nonatomic, assign, readonly) BOOL isMuted;
//  代理
@property (nonatomic, weak, nullable) id<MedproFHHXMediaViewDelegate> delegate;

//  恢复播放
- (void)resume;
//  暂停播放
- (void)pause;
//  设置播放器的背景色
- (void)setPlayerBackgroundColor:(UIColor *)backgroundColor;
//  设置静音
- (void)voiceMute:(BOOL)mute;
//  销毁
- (void)destroyMediaView;

@end

@protocol MedproFHHXMediaViewDelegate <NSObject>

@optional

//  准备播放
- (void)hxMediaReady:(MedproFHHXMediaView *)mediaView;
//  开始播放
- (void)hxMediaStart:(MedproFHHXMediaView *)mediaView;
//  暂停播放
- (void)hxMediaPause:(MedproFHHXMediaView *)mediaView;
//  恢复播放
- (void)hxMediaResume:(MedproFHHXMediaView *)mediaView;
//  播放错误
- (void)hxMediaError:(MedproFHHXMediaView *)mediaView error:(NSError *)error;
//  播放完成
- (void)hxMediaCompleted:(MedproFHHXMediaView *)mediaView;

@end

NS_ASSUME_NONNULL_END
