//
//  LDCSDAConsultCell.h
//  LDCSDivinationAdviserSDK-LDCSDA
//
//  Created by 邝路平 on 2019/10/23.
//

#import <UIKit/UIKit.h>
#import "LDCSDAConsultChatModel.h"
#import "LDCSDAConsultFillMessageCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAConsultCell : UITableViewCell

@property (nonatomic,strong) LDCSDAConsultChatModel *chatModel;
@property (nonatomic,copy) void(^highlightActionBlock)(LDCSDAConsultCell *cell);
@property (nonatomic,copy) void(^startLoadingBlock)(LDCSDAConsultCell *cell);
@property (nonatomic,copy) void(^failImageActionBlock)(LDCSDAConsultCell *cell);
@property (nonatomic,copy) void(^avatarActionBlock)(LDCSDAConsultCell *cell);

@end

NS_ASSUME_NONNULL_END
