//
//  LDCSDAConsultDetailController.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/25.
//

#import "LDCSDABaseViewController.h"
@class LDCSDAConsultDetailHeaderView;
@class LDCSDAOrderListModel;

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAConsultDetailController : LDCSDABaseViewController

@property (nonatomic,strong) LDCSDAOrderListModel *orderModel;
@property (nonatomic, assign) NSInteger consult_id;

@end


NS_ASSUME_NONNULL_END
