//
//  LDCSDAStatistics.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/9/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAStatistics : NSObject

+ (LDCSDAStatistics *(^)(NSString *))lDoperation;

- (LDCSDAStatistics *(^)(NSString *))lDstatisticsObj;

- (LDCSDAStatistics *(^)(NSString *))lDassociationObj;

- (LDCSDAStatistics *(^)(NSString *))lDenter;

- (LDCSDAStatistics *(^)(NSString *))lDtab;

- (LDCSDAStatistics *(^)(NSString *))lDremark;

- (LDCSDAStatistics *(^)(NSString *))lDposition;

- (LDCSDAStatistics *(^)(NSInteger))lDorderType;

- (LDCSDAStatistics *(^)(NSString *))lDorderId;

- (LDCSDAStatistics *(^)(NSString *))lDresultCode;

- (void)lDupload104f000;

- (void)lDupload104c000;

- (void)lDupload104t000;

- (void)lDupload59Statistics;

@end

NS_ASSUME_NONNULL_END
