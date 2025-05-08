//
//  SYFeedAdHelper.h
//  TimeAdSDK
//
//  Created by Amy on 2025/4/14.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TimeAdSDK/SYFeedAdConfigItem.h>
#import <TimeAdSDK/SYAdItem.h>
#import <TimeAdSDK/SYAdMacro.h>
#import <TimeAdSDK/SYAdVideoPlayer.h>
#import <TimeAdSDK/SYFeedAdDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYFeedAdHelper : NSObject

/**
 *  代理
 */
@property (nonatomic, weak) id <SYFeedAdDelegate> delegate;

/**
 *  广告初始化
 *  @param config  配置信息
 *  @return 返回instance
 */
- (instancetype)initWithConfig:(SYFeedAdConfigItem *)config;

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
- (nullable UIView *)getFeedTemplateViewWith:(SYAdItem *)adItem error:(NSError **)error;

/**
 *  主动释放模版视频播放器
 *  @param  view   广告模版view
 */
- (void)releaseTemplateVideoPlayer:(UIView *)view;

/**
 *  注册自渲染view
 *  @param containerView     广告渲染容器
 *  @param clickableViews   广告可点击的views，不传：默认整个广告可响应点击
 *  @return 返回错误，检查adItem、containerView、clickableViews是否存在问题
 */
- (NSError *)registerCustomContainer:(SYAdItem *)adItem
                       containerView:(UIView *)containerView
                      clickableViews:(NSArray<UIView *> *_Nullable)clickableViews;

/**
 *  获取自渲染广告播放器，如需要则调用此方法
 *  @param  adItem   广告数据
 *  @param  size       播放器尺寸
 *  @return 返回广告播放器
 */
- (nullable SYAdVideoPlayer *)getFeedAdVideoPlayerWith:(SYAdItem *)adItem
                                                  size:(CGSize)size
                                                 error:(NSError **)error;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END


