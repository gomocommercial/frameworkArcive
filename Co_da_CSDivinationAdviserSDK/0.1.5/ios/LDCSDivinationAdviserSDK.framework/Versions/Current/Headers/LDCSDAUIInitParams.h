//
//  LDCSDAUIInitParams.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/11/4.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAUIInitParams : NSObject

/**
 * sdkUI界面主题颜色，选传。
 */
@property (nonatomic,strong) UIColor *themeColor;
/**
* sdkUI界面背景图片，选传。
*/
@property (nonatomic,strong) UIImage *bgImage;
/**
* sdkUI界面订单头部item选中的颜色，选传。
*/
@property (nonatomic,strong) UIColor *selectColor;



@end

NS_ASSUME_NONNULL_END
