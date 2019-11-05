//
//  LDCSDABrowserCircleProgressView.h
//  LDCSDivinationAdviserSDK-LDCSDA
//
//  Created by 邝路平 on 2019/10/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDABrowserCircleProgressView : UIView

/* 范围为0～1 */
@property (nonatomic,assign) CGFloat progress;
/* 圆环颜色 */
@property (nonatomic,strong) UIColor *circleColor;
/* 圆环大小 */
@property (nonatomic,assign) CGFloat circleWH;
/* 圆环宽度 */
@property (nonatomic,assign) CGFloat lineWidth;

- (void)configCircleView;

@end

NS_ASSUME_NONNULL_END
