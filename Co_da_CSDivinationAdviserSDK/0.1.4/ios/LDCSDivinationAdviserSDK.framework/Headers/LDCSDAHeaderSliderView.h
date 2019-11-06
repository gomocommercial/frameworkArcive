//
//  LDCSDAHeaderSliderView.h
//  LDCSDivinationAdviserSDK
//
//  Created by 邝路平 on 2019/9/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAHeaderSliderView : UIView

@property (nonatomic,copy) void(^sliderTagBlock)(NSInteger index);

@property (nonatomic,assign) CGFloat progress;

+ (CGFloat)headerHeight;

@end

NS_ASSUME_NONNULL_END
