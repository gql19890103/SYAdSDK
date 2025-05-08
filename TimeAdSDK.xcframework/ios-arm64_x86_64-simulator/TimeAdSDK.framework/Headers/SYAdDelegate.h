//
//  SYAdDelegate.h
//  TimeAdSDK
//
//  Created by Amy on 2025/4/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class SYAdItem;
@protocol SYAdDelegate <NSObject>

@optional

/**
 * 广告加载失败
 * @param error 错误信息
 */
- (void)onAdLoadFailed:(SYAdItem *)item error:(NSError *_Nonnull)error;

/**
 * 广告展示
 * @param item  广告数据
 */
- (void)onAdShow:(SYAdItem *)item;

/**
 * 广告点击
 * @param item  广告数据
 */
- (void)onAdClicked:(SYAdItem *)item;

/**
 * 广告关闭
 * @param item  广告数据
 */
- (void)onAdClosed:(SYAdItem *)item;

/**
 *  接入方实现广告跳转落地页
 *  @param item      广告数据
 *  @param webUrl  落地页链接
 */
- (void)onAdLandingPage:(SYAdItem *)item webUrl:(NSString *)webUrl;

/**
 * 广告点击
 * @param item  广告数据
 * @param view  点击的view
 */
- (void)onAdClicked:(SYAdItem *)item view:(UIView *)view;

/**
 * 广告点击跳过
 * @param item  广告数据
 */
- (void)onAdSkip:(SYAdItem *)item;

/**
 * 广告倒计时结束
 * @param item  广告数据
 */
- (void)onAdCountdownEnd:(SYAdItem *)item;

@end

NS_ASSUME_NONNULL_END 
