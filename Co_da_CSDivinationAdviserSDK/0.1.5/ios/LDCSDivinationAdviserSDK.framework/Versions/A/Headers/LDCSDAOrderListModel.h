//
//  LDCSDAOrderListModel.h
//  LDCSDivinationAdviserSDK
//
//  Created by 邝路平 on 2019/9/20.
//

#import <Foundation/Foundation.h>
#import "LDCSDAConsultModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAOrderListModel : NSObject

@property (nonatomic, copy) NSString *order_code;// string    否订单编码
//@property (nonatomic, copy) NSString *account_id;//    string    否    用户id
@property (nonatomic, assign) NSInteger create_time;// date    否 订单创建时间
@property (nonatomic, assign) NSInteger pay_time;//    date    否    订单支付时间
@property (nonatomic, assign) NSInteger finish_time;//    date    否    订单完成时间
@property (nonatomic, strong) LDCSDAConsultModel *consult_dto;//    ConsultDTO    否    订单咨询信息
// 用户端：1：待支付，2：已支付，3：已完结，4：已退款
@property (nonatomic, assign) NSInteger state;//    int    否    订单状态
@property (nonatomic, assign) NSInteger service_type;//    int    否    服务类型
@property (nonatomic, assign) CGFloat order_amount;//    BigDecimal    否    订单金额
@property (nonatomic, copy) NSString *advisor_name;//    string    否    老师昵称
@property (nonatomic, copy) NSString *advisor_avatar;//    string    否    老师头像
@property (nonatomic,copy) NSString *advisor_code; //    string    否    老师Id
@property (nonatomic, assign) NSInteger cancel_time_interval;//支付剩余取消时间
@property (nonatomic, assign) NSInteger refund_time_interval;//老师回答剩余取消时间

@end

NS_ASSUME_NONNULL_END
