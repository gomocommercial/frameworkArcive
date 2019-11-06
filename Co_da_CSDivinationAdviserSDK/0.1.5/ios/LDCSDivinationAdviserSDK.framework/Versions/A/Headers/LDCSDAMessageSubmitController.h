//
//  LDCSDAMessageSubmitController.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/12.
//

#import "LDCSDABaseViewController.h"
@class LDCSDATeacherModel;
@class LDCSDAConsultModel;

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAMessageSubmitController : LDCSDABaseViewController

@property (nonatomic,strong) LDCSDATeacherModel *lDteacherModel;
@property (nonatomic, copy) NSString *questionTitle;
@property (nonatomic, copy) void(^paySuccess)(LDCSDAConsultModel *model);

@end

NS_ASSUME_NONNULL_END
