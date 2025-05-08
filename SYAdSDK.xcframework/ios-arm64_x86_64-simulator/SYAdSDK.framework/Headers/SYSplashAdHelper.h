//
//  SYSplashAdHelper.h
//  SYAdSDK
//
//  Created by Amy on 2025/4/24.
//

#import <Foundation/Foundation.h>
#import <SYAdSDK/SYSplashAdConfigItem.h>
#import <SYAdSDK/SYAdItem.h>
#import <SYAdSDK/SYAdMacro.h>
#import <SYAdSDK/SYSplashAdDelegate.h>
#import <SYAdSDK/SYAdVideoPlayer.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYSplashAdHelper : NSObject

/**
 *  代理
 */
@property (nonatomic, weak) id <SYSplashAdDelegate> delegate;

/**
 *  广告初始化
 *  @param config  配置信息
 *  @return 返回instance
 */
- (instancetype)initWithConfig:(SYSplashAdConfigItem *)config;

/**
 *  获取广告数据
 *  @param handler   获取广告数据call back block
 */
- (void)loadAdDataWith:(SYAdDataCallBackHandler)handler;

/**
 *  广告竞价结果
 *  @param adItem   广告数据
 *  @param success  成功 or 失败
 */
- (void)bidAdItem:(SYAdItem *)adItem success:(BOOL)success;

/**
 *  获取模版广告view
 *  @param  adItem   广告数据
 *  @return 返回模版view
 */
- (UIView *)getSplashAdTemplateWith:(SYAdItem *)adItem error:(NSError **)error;

/**
 *  注册自渲染view
 *  @param containerView     广告渲染容器
 *  @param clickableViews   广告可点击的views，不传：默认整个广告可响应点击
 *  @param skipView                 广告跳过view
 *  @param useShakeMotion   是否使用摇一摇互动，如使用，调用下面startShakeMonitoring 开始检测；调用stopShakeMonitoring停止检测；
 *  @return 返回错误，检查adItem、containerView、clickableViews是否存在问题
 */
- (NSError *)registerCustomContainer:(SYAdItem *)adItem
                       containerView:(UIView *)containerView
                      clickableViews:(NSArray<UIView *> *_Nullable)clickableViews
                            skipView:(UIView *)skipView
                      useShakeMotion:(BOOL)useShakeMotion;

/**
 *  开始检测，仅自渲染可以使用，如需要调用方法registerCustomContainer，设置useShakeMotion
 */
- (void)startShakeMonitoring;

/**
 *  停止检测，仅自渲染可以使用，如需要调用方法registerCustomContainer，设置useShakeMotion
 */
- (void)stopShakeMonitoring;

/**
 *  获取自渲染广告播放器，如需要则调用此方法
 *  @param  adItem   广告数据
 *  @param  size       播放器尺寸
 *  @return 返回广告播放器
 */
- (nullable SYAdVideoPlayer *)getAdVideoPlayerWith:(SYAdItem *)adItem
                                              size:(CGSize)size
                                             error:(NSError **)error;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
