//
//  LDCSDAConsultController.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/23.
//

#import "LDCSDABaseViewController.h"
@class LDCSDATeacherModel;
@class LDCSDAOrderListModel;
@class LDCSDAConsultModel;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LDConsultFromType) {
    LDConsultFromType_Submit,
    LDConsultFromType_Order,
    LDConsultFromType_Remote,
    LDConsultFromType_More
};


@interface LDCSDAConsultController : LDCSDABaseViewController

@property (nonatomic,assign) LDConsultFromType fromType;

// 从订单列表那边过来
@property (nonatomic,strong) LDCSDAOrderListModel *orderModel;
// 从上传咨询订单中过来
@property (nonatomic,strong) LDCSDAConsultModel *consultModel;
// 从通知过来
@property (nonatomic,assign) NSInteger consult_id;

//提交、咨询订单
@property (nonatomic,strong) LDCSDATeacherModel *teacherModel;

@end

NS_ASSUME_NONNULL_END
