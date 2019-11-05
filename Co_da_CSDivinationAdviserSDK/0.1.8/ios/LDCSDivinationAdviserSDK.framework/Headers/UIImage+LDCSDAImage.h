//
//  UIImage+LDCSDAImage.h
//  LDCSDivinationAdviserSDK
//
//  Created by Zy on 2019/9/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (LDCSDAImage)

+ (UIImage *)lDdaImageWithName:(NSString *)name;

+ (UIImage *)lDhorizontalGradientStartColor:(UIColor *)startColor endColor:(UIColor *)endColor size:(CGSize)size;

+ (UIImage *)lDverticalGradientStartColor:(UIColor *)startColor endColor:(UIColor *)endColor size:(CGSize)size;

// 压缩图片到指定大小(单位KB)
+ (NSData *)lDresetSizeOfImageData:(UIImage *)sourceImage maxSize:(NSInteger)maxSize;

/**
 *  用color生成image
 *
 *  @param color 颜色
 */
+ (UIImage *)lDimageWithColor:(UIColor *)color;

+ (UIImage *)lDimageWithColor:(UIColor *)color size:(CGSize)size;

/**
*   按大小缩放
*/
- (UIImage *)lDimageScaledToSize:(CGSize)size;

/**
*   最小缩放
*/
- (UIImage *)lDimageScaledToFitSize:(CGSize)size;

/**
*   最大缩放
*/
- (UIImage *)lDimageScaledToFillSize:(CGSize)size;


@end

NS_ASSUME_NONNULL_END
