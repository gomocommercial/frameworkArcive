//
//  LDCSDAPaySuccessView.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/30.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAPaySuccessView : UIView

+(void)lDshowPaySuccessViewWithSureBlock:(void(^)(void))sureBlock;

@end

NS_ASSUME_NONNULL_END
