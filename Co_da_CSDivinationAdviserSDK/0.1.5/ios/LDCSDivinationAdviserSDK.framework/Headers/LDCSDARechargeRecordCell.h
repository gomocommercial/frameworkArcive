//
//  LDCSDARechargeRecordCell.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/9/23.
//

#import <UIKit/UIKit.h>

@class LDCSDAConsumeRecordModel;

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDARechargeRecordCell : UITableViewCell

+ (CGFloat)cellHeight;

@property (nonatomic,strong) LDCSDAConsumeRecordModel *lDRecordModel;

@end

NS_ASSUME_NONNULL_END
