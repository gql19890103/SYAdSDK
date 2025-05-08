//
//  SYAdSDKInitModule.h
//  SYAdSDK
//
//  Created by Amy on 2025/1/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYAdSDKInitModule : NSObject

/**
 *  sdk 初始化
 *  @param clientId             应用id
 *  @param clientSecret    应用key
 *  @param getIDFABySDK    是否允许sdk 获取idfa，默认sdk不获取
 *  @param adId    中国广告协会sdk提供标识，aid
 *  @param caids  中国广告协会sdk提供标识caids数组，直接填写广协返回的caid数组就可以
 */
+ (void)initSDKWithClientId:(NSString *)clientId
               clientSecret:(NSString *)clientSecret
               getIDFABySDK:(BOOL)getIDFABySDK
                       idfa:(nullable NSString *)idfa
                       adId:(nullable NSString *)adId
                       caid:(nullable NSArray *)caids;

/**
 *  sdk 版本号
 */
+ (NSString *)sdkVersion;

- (instancetype) init NS_UNAVAILABLE;
+ (instancetype) new NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END 
