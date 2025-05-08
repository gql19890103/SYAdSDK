//
//  SYAdItem.h
//  TimeAdSDK
//
//  Created by Amy on 2025/4/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYAdItem : NSObject

@property (nonatomic,   copy) NSString *iid;
@property (nonatomic, assign) NSInteger bidPrice;
@property (nonatomic, assign) NSInteger bidType;
@property (nonatomic,   copy) NSString *ext;
@property (nonatomic, assign) BOOL isVideoAd;

/// 自渲染广告素材
@property (nonatomic,   copy) NSDictionary *adMaterialDict;

/// 竞价成功的价格，sdk返回广告竞价失败时回传
@property (nonatomic, assign) NSInteger winAdPrice;

@end

NS_ASSUME_NONNULL_END 
