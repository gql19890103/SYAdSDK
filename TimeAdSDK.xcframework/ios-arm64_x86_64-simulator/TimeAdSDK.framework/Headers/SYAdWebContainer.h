//
//  SYAdWebContainer.h
//  TimeAdSDK
//
//  Created by Amy on 2025/4/27.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SYAdWebContainer : UIView

/**
 * 内部的WebView
 */
@property (nonatomic, strong, readonly) WKWebView *webView;

/**
 * 加载URL
 * @param url 要加载的URL
 */
- (void)loadURL:(NSURL *)url;


@end

NS_ASSUME_NONNULL_END
