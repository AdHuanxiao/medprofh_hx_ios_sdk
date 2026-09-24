//
//  HuanxiaoAds.h
//  HuanxiaoAds SDK
//
//  Copyright © 2026 Huanxiao Technology Co., Ltd. All rights reserved.


#import <Foundation/Foundation.h>

//! SDK 版本号 (数值)
FOUNDATION_EXPORT double HuanxiaoAdsVersionNumber;

//! SDK 版本号 (字符串)
FOUNDATION_EXPORT const unsigned char HuanxiaoAdsVersionString[];

#pragma mark - 核心模块

/// SDK 常量定义（错误码、状态码、日志级别）
#import <MedproFHHuanxiaoAds/MedproFHHXAdsDefines.h>

/// 隐私配置类
#import <MedproFHHuanxiaoAds/MedproFHHXPrivacyConfig.h>

/// SDK 配置类
#import <MedproFHHuanxiaoAds/MedproFHHXAdsConfig.h>

/// SDK 主类
#import <MedproFHHuanxiaoAds/MedproFHHXAdsSDK.h>

#pragma mark - 广告模块

#import <MedproFHHuanxiaoAds/MedproFHHXAdMaterialInfo.h>

// 竞价结果通知协议
#import <MedproFHHuanxiaoAds/MedproFHHXBidNotifiable.h>

#import <MedproFHHuanxiaoAds/MedproFHHXFullscreenAdRenderData.h>

// 开屏广告
#import <MedproFHHuanxiaoAds/MedproFHHXSplashAdDelegate.h>
#import <MedproFHHuanxiaoAds/MedproFHHXSplashAd.h>

// 插屏广告
#import <MedproFHHuanxiaoAds/MedproFHHXInterstitialAdDelegate.h>
#import <MedproFHHuanxiaoAds/MedproFHHXInterstitialAd.h>

// 信息流广告
#import <MedproFHHuanxiaoAds/MedproFHHXNativeAdDelegate.h>
#import <MedproFHHuanxiaoAds/MedproFHHXNativeAd.h>
#import <MedproFHHuanxiaoAds/MedproFHHXNativeAdRenderData.h>
#import <MedproFHHuanxiaoAds/MedproFHHXInteractionContainerView.h>
#import <MedproFHHuanxiaoAds/MedproFHHXMediaView.h>
// 激励视频广告
#import <MedproFHHuanxiaoAds/MedproFHHXRewardVideoAdDelegate.h>
#import <MedproFHHuanxiaoAds/MedproFHHXRewardVideoAd.h>

