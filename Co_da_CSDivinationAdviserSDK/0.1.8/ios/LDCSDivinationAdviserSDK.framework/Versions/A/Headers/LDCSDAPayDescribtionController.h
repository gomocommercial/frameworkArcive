//
//  LDCSDAPayDescribtionController.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/24.
//

#import "LDCSDABaseViewController.h"
@class LDCSDATeacherModel;
@class LDCSDAConsultModel;
@class LDCSDAOrderListModel;

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAPayDescribtionController : LDCSDABaseViewController

@property (nonatomic,assign) BOOL isFromOrder;

@property (nonatomic,strong) LDCSDATeacherModel *teacherModel;
@property (nonatomic,strong) LDCSDAConsultModel *consultModel;
@property (nonatomic,strong) NSString *order_code;

@property (nonatomic,strong) LDCSDAOrderListModel *orderModel;



@end

NS_ASSUME_NONNULL_END
