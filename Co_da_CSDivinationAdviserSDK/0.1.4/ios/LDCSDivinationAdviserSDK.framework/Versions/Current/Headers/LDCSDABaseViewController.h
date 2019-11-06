//
//  LDCSDABaseViewController.h
//  LDCSDivinationAdviserSDK
//
//  Created by Zy on 2019/9/18.
//

#import <UIKit/UIKit.h>
@class LDCSDANavigationBar;
NS_ASSUME_NONNULL_BEGIN

@interface LDCSDABaseViewController : UIViewController

@property (nonatomic, strong, readonly) LDCSDANavigationBar *lDnavigationBar;

- (UIView *)lDcreateBackgroundImageView;

- (void)lDleftBtnDidClcik;

@end

NS_ASSUME_NONNULL_END
