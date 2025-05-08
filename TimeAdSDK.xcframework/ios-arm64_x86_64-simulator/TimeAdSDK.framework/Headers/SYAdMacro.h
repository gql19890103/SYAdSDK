//
//  SYAdMacro.h
//  TimeAdSDK
//
//  Created by Amy on 2025/4/15.
//

#import <Foundation/Foundation.h>

#ifndef SYAdMacro_h
#define SYAdMacro_h

#ifdef DEBUG
#define NSLog(...) NSLog(__VA_ARGS__)
#else
#define NSLog(...)
#endif

/// sdk版本号
#define kSYAdSDKVersion     @"1.0.0"

/// 广告类型
typedef NS_OPTIONS(NSUInteger, SYAdType) {
    /// 信息流
    SYAdTypeFeed            = 1,
    
    /// 开屏
    SYAdTypeSplash          = 2,
    
    /// banner
    SYAdTypeBanner          = 3,
    
    /// 插屏
    SYAdTypeInterstitial    = 4,
    
    /// 激励
    SYAdTypeInspireVideo    = 5,
    
    /// 开屏
    SYAdTypeSplashVideo     = 7,
    
};

/// 广告渲染类型
typedef NS_OPTIONS(NSInteger, SYAdRenderType) {
    /// 默认值
    SYAdRenderTypeDefault = -9999,
    
    /// sdk模版渲染
    SYAdRenderTypeTemplate = 1,
    
    /// 媒体自渲染
    SYAdRenderTypeCustom   = 2,
};

/// 广告数据请求回调
typedef void(^SYAdDataCallBackHandler)(NSArray * _Nullable array, NSError * _Nullable error);

/**
 * 视频播放器状态枚举
 */
typedef NS_ENUM(NSInteger, SYVideoPlayerState) {
    SYVideoPlayerStateUnknown = 0,  // 未知状态
    SYVideoPlayerStateBuffering,    // 正在缓冲
    SYVideoPlayerStatePlaying,      // 正在播放
    SYVideoPlayerStatePaused,       // 已暂停
    SYVideoPlayerStateStopped,      // 已停止
    SYVideoPlayerStateCompleted,    // 播放完成
    SYVideoPlayerStateFailed        // 播放失败
};

/**
 * 视频播放状态回调
 * @param state 当前视频播放状态
 * @param error 如果出现错误，包含错误信息
 */
typedef void(^SYVideoPlayerStateCallback)(SYVideoPlayerState state, NSError * _Nullable error);

/**
 * 视频播放进度回调
 * @param currentTime 当前播放时间（秒）
 * @param duration 视频总时长（秒）
 */
typedef void(^SYVideoPlayerProgressCallback)(NSTimeInterval currentTime, NSTimeInterval duration);

/// 广告打开类
typedef NS_OPTIONS(NSUInteger, SYAdOpenType) {
    /// push
    SYAdOpenTypePush    = 1,
    
    /// Present
    SYAdOpenTypePresent = 2,
};

#endif /* SYAdMacro_h */ 
