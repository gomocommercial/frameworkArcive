//
//  LDCSDAAdvisorsCell.h
//  LDCSDivinationAdviserSDK
//
//  Created by 邝路平 on 2019/9/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class LDCSDATeacherModel;

@interface LDCSDAAdvisorsCell : UITableViewCell

@property (nonatomic, strong) UIView *lineView;
@property (nonatomic,strong) LDCSDATeacherModel *teacherModel;
@property (nonatomic,copy) void(^chatBlock)(LDCSDATeacherModel *teacherModel);

+ (CGFloat)cellHeight;

@end

NS_ASSUME_NONNULL_END
