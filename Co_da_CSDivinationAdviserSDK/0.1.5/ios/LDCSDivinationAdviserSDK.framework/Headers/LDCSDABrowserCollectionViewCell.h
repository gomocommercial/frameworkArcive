//
//  LDCSDABrowserCollectionViewCell.h
//  LDCSDivinationAdviserSDK-LDCSDA
//
//  Created by 邝路平 on 2019/10/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDABrowserCollectionViewCell : UICollectionViewCell

@property (nonatomic,copy) void(^cancelBlock)(void);

@property (nonatomic,copy) void(^browserChangeAlphaBlock)(CGFloat alpha,NSTimeInterval duration);

@property (nonatomic,copy) void(^browserScrollEnabledBlock)(BOOL isenable);

@property (nonatomic,copy) void(^browserToolBarHiddenBlock)(BOOL isHide);


@property (nonatomic,strong) NSURL *url;

@property (nonatomic,strong) UIImage *singleImage;

- (UIImageView *)browserCurrentForegroundView;

@end

NS_ASSUME_NONNULL_END
