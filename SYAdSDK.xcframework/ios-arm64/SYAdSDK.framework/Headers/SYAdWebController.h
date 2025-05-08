//
//  SYAdWebController.h
//  SYAdSDK
//
//  Created by Amy on 2025/4/27.
//

#import <UIKit/UIKit.h>
#import <SYAdSDK/SYAdMacro.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYAdWebController : UIViewController

/**
 * 网页URL
 */
@property (nonatomic, strong, readonly) NSURL *url;

/**
 * 导航栏标题
 */
@property (nonatomic, copy) NSString *navTitle;

/**
 * 初始化方法
 * @param url 要加载的URL
 * @return 实例
 */
- (instancetype)initWithURL:(NSURL *)url openType:(SYAdOpenType)openType;

@end

NS_ASSUME_NONNULL_END
