//
//  LDCSDAConsultDetailCell.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/25.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const LDConsultDetailCell_Normal;
extern NSString *const LDConsultDetailCell_ChangeHeight;

@interface LDCSDAConsultDetailCell : UITableViewCell

@property (nonatomic,strong) NSString *lDTitleStr;
@property (nonatomic,strong) NSString *lDContentStr;
@property (nonatomic,strong) NSString *lDBottomStr;
@property (nonatomic,assign) BOOL needHideLine;

@end

NS_ASSUME_NONNULL_END
