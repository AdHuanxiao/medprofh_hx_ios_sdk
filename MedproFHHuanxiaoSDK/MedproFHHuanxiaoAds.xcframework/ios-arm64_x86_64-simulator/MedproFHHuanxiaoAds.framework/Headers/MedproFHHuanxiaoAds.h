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
#import <MedproFHHuanxiaoAds/HXAdsDefines.h>

/// 隐私配置类
#import <MedproFHHuanxiaoAds/HXPrivacyConfig.h>

/// SDK 配置类
#import <MedproFHHuanxiaoAds/HXAdsConfig.h>

/// SDK 主类
#import <MedproFHHuanxiaoAds/HXAdsSDK.h>

#pragma mark - 广告模块

// 竞价结果通知协议
#import <MedproFHHuanxiaoAds/HXBidNotifiable.h>

// 开屏广告
#import <MedproFHHuanxiaoAds/HXSplashAdDelegate.h>
#import <MedproFHHuanxiaoAds/HXSplashAd.h>
#import <MedproFHHuanxiaoAds/HXSplashAd+Internal.h>

// 插屏广告
#import <MedproFHHuanxiaoAds/HXInterstitialAdDelegate.h>
#import <MedproFHHuanxiaoAds/HXInterstitialAd.h>
#import <MedproFHHuanxiaoAds/HXInterstitialAd+Internal.h>

// 信息流广告
#import <MedproFHHuanxiaoAds/HXNativeAdDelegate.h>
#import <MedproFHHuanxiaoAds/HXNativeAd.h>
#import <MedproFHHuanxiaoAds/HXNativeAd+Internal.h>
#import <MedproFHHuanxiaoAds/HXNativeAdRenderData.h>
#import <MedproFHHuanxiaoAds/HXInteractionContainerView.h>
#import <MedproFHHuanxiaoAds/HXMediaView.h>
// 激励视频广告
#import <MedproFHHuanxiaoAds/HXRewardVideoAdDelegate.h>
#import <MedproFHHuanxiaoAds/HXRewardVideoAd.h>
#import <MedproFHHuanxiaoAds/HXRewardVideoAd+Internal.h>
#import <MedproFHHuanxiaoAds/HXResourceLoader.h>

