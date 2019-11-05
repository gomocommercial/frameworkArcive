//
//  LDCSDALoadFooter.h
//  LDCSDivinationAdviserSDK-LDCSDA
//
//  Created by 邝路平 on 2019/10/28.
//

#import "MJRefreshAutoFooter.h"

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDALoadFooter : MJRefreshAutoFooter

- (void)setStateText:(NSString *)stateText;
- (void)hideLoading;
- (void)endRefreshing;

@end

NS_ASSUME_NONNULL_END
