//
//  LDCSDATeacherDetailTipsView.h
//  LDCSDivinationAdviserSDK-LDCSDA
//
//  Created by 邝路平 on 2019/9/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDATeacherDetailTipsView : UIView

@property (nonatomic,assign) CGFloat maxWidth;
@property (nonatomic,strong) NSArray *titleArr;
@property (nonatomic,assign) CGFloat leftPadding;
@property (nonatomic,assign) CGFloat topPadding;
@property (nonatomic,assign) CGFloat horizontalPadding;
@property (nonatomic,assign) CGFloat verticalPadding;
@property (nonatomic,strong) UIFont *textFont;
@property (nonatomic,assign) CGFloat textHorizontalPadding;
@property (nonatomic,assign) CGFloat textVerticalPadding;
@property (nonatomic,strong) UIColor *textColor;
@property (nonatomic,strong) UIColor *bgColor;

- (void)createListLabelView;

- (CGFloat)resultHeight;

@end

NS_ASSUME_NONNULL_END
