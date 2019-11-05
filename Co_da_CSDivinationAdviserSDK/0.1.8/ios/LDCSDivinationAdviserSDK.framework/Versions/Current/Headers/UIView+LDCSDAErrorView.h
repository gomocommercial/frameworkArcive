//
//  UIView+LDCSDAErrorView.h
//  LDCSDivinationAdviserSDK
//
//  Created by 邝路平 on 2019/9/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (LDCSDAErrorView)

- (void)lDshowNetworkErrorViewWithRefreshBlock:(void(^)(void))refreshBlock;
- (void)lDshowNoContentViewWithRefreshBlock:(void(^)(void))refreshBlock;
- (void)lDhideNetworkErrorViewOrNoContentView;

@end

NS_ASSUME_NONNULL_END
