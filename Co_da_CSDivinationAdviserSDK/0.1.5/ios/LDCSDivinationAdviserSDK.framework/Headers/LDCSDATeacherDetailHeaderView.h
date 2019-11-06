//
//  LDCSDATeacherDetailHeaderView.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/9/27.
//

#import <UIKit/UIKit.h>
@class LDCSDATeacherModel;
NS_ASSUME_NONNULL_BEGIN

@interface LDCSDATeacherDetailHeaderView : UIView

@property (nonatomic,strong) LDCSDATeacherModel *teacherModel;

+ (CGFloat)headerHeight;

@end

NS_ASSUME_NONNULL_END
