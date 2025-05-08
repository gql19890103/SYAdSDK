//
//  SYAdVideoPlayer.h
//  TimeAdSDK
//
//  Created by Amy on 2025/4/23.
//

#import <UIKit/UIKit.h>
#import <TimeAdSDK/SYAdMacro.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYAdVideoPlayer : UIView

/**
 * 设置视频播放状态回调
 * @param callback 状态变化时的回调
 */
- (void)setStateCallback:(nullable SYVideoPlayerStateCallback)callback;

/**
 * 设置视频播放进度回调
 * @param callback 进度变化时的回调，间隔（1秒）
 */
- (void)setProgressCallback:(nullable SYVideoPlayerProgressCallback)callback;

/**
 * 开始播放视频
 */
- (void)play;

/**
 * 暂停播放
 */
- (void)pause;

/**
 * 重新播放视频
 */
- (void)replay;

/**
 * 静音/取消静音
 * @param mute YES表示静音，NO表示取消静音
 */
- (void)setMute:(BOOL)mute;

/**
 * 播放器状态
 * @return SYVideoPlayerState
 */
- (SYVideoPlayerState)playerState;

/**
 * 释放资源
 */
- (void)releasePlayer;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
