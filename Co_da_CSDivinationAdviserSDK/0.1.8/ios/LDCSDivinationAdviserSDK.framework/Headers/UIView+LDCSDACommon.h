//
//  UIView+LDCSDACommon.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/9/27.
//

#import <UIKit/UIKit.h>
@class LDCSDALoadingView;

NS_ASSUME_NONNULL_BEGIN

@interface UIView (LDCSDACommon)

- (UIViewController *)lDcurrentController;

- (void)lDaddClickBlock:(void (^)(NSInteger tag))block;

- (void)lDhideLoading;
- (void)lDshowLoading;

@end

NS_ASSUME_NONNULL_END
