//
//  LDCSDADataLoadManager.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/9/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^lDFailureBlock)(NSError * error);
typedef void (^lDSuccessBlock)(id handleResult);

@interface LDCSDADataLoadManager : NSObject

+(instancetype)shareManager;

// 首页老师列表
-(void)lDmainAdvisorsWithSuccess:(lDSuccessBlock)successBlock failure:(lDFailureBlock)failureBlock;

// 查询老师信息详情
- (void)lDselectAdvisorDetail:(NSString *)advisorCode
             successBlock:(lDSuccessBlock)successBlock
             failureBlock:(lDFailureBlock)failureBlock;

// 获取用户订单信息
- (void)lDuserOrderList:(long)startId
                 size:(NSInteger)size
           orderState:(NSInteger)orderState
               userId:(NSString * )userId
       successBlock:(lDSuccessBlock)successBlock
       failureBlock:(lDFailureBlock)failureBlock;

// 查询咨询订单
-(void)lDlDgetConsultOrder:(NSString * )consult_id
        successBlock:(lDSuccessBlock)successBlock
        failureBlock:(lDFailureBlock)failureBlock;

// 获取账户余额
- (void)lDgetBalanceWithAccountId:(NSString *)accountId
                        Success:(lDSuccessBlock)successBlock
                        failure:(lDFailureBlock)failureBlock;

// 获取充值商品
- (void)lDgetrechargeProductSuccess:(lDSuccessBlock)successBlock
                          failure:(lDFailureBlock)failureBlock;

// 商品充值
- (void)lDbalanceRechargeWithProductCode:(NSString *)productCode
                         WithAccountId:(NSString *)accountId
                                tranId:(NSString *)tran_id
                               Success:(lDSuccessBlock)successBlock
                               failure:(lDFailureBlock)failureBlock;

// 余额使用明细
- (void)lDgetBalanceDetailWithParam:(NSDictionary *)params
                     moreQueryDic:(NSDictionary *)queryDic
                          Success:(lDSuccessBlock)successBlock
                          failure:(lDFailureBlock)failureBlock;

// 余额消费
- (void)lDconsumptionWithUserId:(NSString *)userId
                    orderCode:(NSString *)orderCode
                  description:(NSString *)description
               successBlock:(lDSuccessBlock)successBlock
               failureBlock:(lDFailureBlock)failureBlock;

// 生成订单
- (void)lDgenerateOrderWithParams:(NSDictionary *)params
                 successBlock:(lDSuccessBlock)successBlock
                 failureBlock:(lDFailureBlock)failureBlock;

// 上传咨询表单
- (void)lDuploadConsultationWithParams:(NSDictionary *)params
                      successBlock:(lDSuccessBlock)successBlock
                      failureBlock:(lDFailureBlock)failureBlock;

// 咨询分类列表
- (void)lDadvisorTypeWithsuccessBlock:(lDSuccessBlock)successBlock
                       failureBlock:(lDFailureBlock)failureBlock;

// 按咨询类型归类的老师列表
- (void)lDadvisorClassifyListWithsuccessBlock:(lDSuccessBlock)successBlock
                               failureBlock:(lDFailureBlock)failureBlock;

// 查询老师回复
- (void)lDselectAdvisorReplyWithConsultId:(NSInteger)consultId
                         successBlock:(lDSuccessBlock)successBlock
                         failureBlock:(lDFailureBlock)failureBlock;

// 测试老师回复
-(void)lDteacherCallOrder_code:(NSString *)order_code consult_id:(NSString *)consult_id successBlock:(lDSuccessBlock)successBlock
              failureBlock:(lDFailureBlock)failureBlock;


//获取老师短介绍
- (void)lDadvisorIntroductionWithAdvisorCode:(NSString *)advisorCode
                            successBlock:(lDSuccessBlock)successBlock
                            failureBlock:(lDFailureBlock)failureBlock;


@end

NS_ASSUME_NONNULL_END
