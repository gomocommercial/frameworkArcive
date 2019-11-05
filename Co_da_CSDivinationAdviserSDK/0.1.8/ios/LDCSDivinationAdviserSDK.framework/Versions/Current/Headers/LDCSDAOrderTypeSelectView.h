//
//  LDCSDAOrderTypeSelectView.h
//  LDCSDivinationAdviserSDK
//
//  Created by 邝路平 on 2019/9/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAOrderTypeSelectView : UIView

@property (nonatomic,copy) void(^selectBlock)(NSInteger index);

- (void)setSelectIndex:(NSInteger)selectIndex;

+ (CGFloat)headerHeight;

@end

NS_ASSUME_NONNULL_END
