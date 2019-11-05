//
//  UIColor+LDCSDAColor.h
//  LDCSDivinationAdviserSDK
//
//  Created by 邝路平 on 2019/9/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (LDCSDAColor)

@property (nonatomic, assign, readonly) CGFloat lDred;
@property (nonatomic, assign, readonly) CGFloat lDgreen;
@property (nonatomic, assign, readonly) CGFloat lDblue;
@property (nonatomic, assign, readonly) CGFloat lDalpha;


+ (UIColor *)lDCSDAColorWithHexString:(NSString *)colorStr;

+ (UIColor *)lDCSDAColorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

+ (UIColor *)lDinterpolationColorFrom:(UIColor *)fromColor to:(UIColor *)toColor percent:(CGFloat)percent;
//生成渐变色的图片
+(UIImage*) captureView:(UIView *)captureView rect:(CGRect)viewRect startColor:(UIColor *)startColor endColor:(UIColor *)endColor;
@end

NS_ASSUME_NONNULL_END
