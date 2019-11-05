//
//  LDCSDAConsumeRecordModel.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/9/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAConsumeRecordModel : NSObject

// 操作类型：1 充值余额 2 消费余额 3退款余额
@property (nonatomic,assign) NSInteger oper_type;
@property (nonatomic,assign) float oper_num;
@property (nonatomic,assign) NSInteger oper_date;
@property (nonatomic,strong) NSString *myDescription;

@end

NS_ASSUME_NONNULL_END
