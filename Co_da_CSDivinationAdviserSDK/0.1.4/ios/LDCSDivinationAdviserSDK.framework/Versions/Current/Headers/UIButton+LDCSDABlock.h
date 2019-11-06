//
//  UIButton+LDCSDABlock.h
//  LDCSDivinationAdviserSDK-LDCSDA
//
//  Created by 邝路平 on 2019/10/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (LDCSDABlock)

- (void)lDaddHandleBlock:(void (^)(NSInteger tag))block;

@end

NS_ASSUME_NONNULL_END
