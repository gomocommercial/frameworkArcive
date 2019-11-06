//
//  LDCSDAHUDTool.h
//  LDCSDivinationAdviserSDK
//
//  Created by 邝路平 on 2019/9/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAHUDTool : NSObject

/* loading的提示 */
+ (void)lDshowLoadingView:(UIView *_Nullable)view;
+ (void)lDhideLoadingView:(UIView *_Nullable)view;

+ (void)lDshowLoadingViewWithMessage:(NSString *_Nullable)message view:(UIView *_Nullable)view;

/* 文字提示的toast */
+ (void)lDshowHUDWithMessage:(NSString *_Nullable)message view:(UIView *_Nullable) view;
+ (void)lDshowHUDWithMessage:(NSString *_Nullable)message view:(UIView *_Nullable) view afterDelay:(CGFloat)delayTime;

/* 底部显示的toast */
+ (void)lDshowBottomHUDWithMessage:(NSString *_Nullable)message view:(UIView *_Nullable)view;
+ (void)lDshowBottomHUDWithMessage:(NSString *_Nullable)message view:(UIView *_Nullable)view afterDelay:(CGFloat)delayTime;

@end

NS_ASSUME_NONNULL_END
