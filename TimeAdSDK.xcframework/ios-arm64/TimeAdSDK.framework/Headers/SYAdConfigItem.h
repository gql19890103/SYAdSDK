//
//  SYAdConfigItem.h
//  TimeAdSDK
//
//  Created by Amy on 2025/4/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYAdConfigItem : NSObject

/// 广告位ID
@property (nonatomic, assign) NSUInteger slotId;

/// 视频播放器设置，是否静音播放，YES表示静音，NO表示取消静音，默认静音
@property (nonatomic, assign) BOOL videoMute;

/// sdk logo img
+ (UIImage *)sdkLogoImage;

@end

NS_ASSUME_NONNULL_END 

