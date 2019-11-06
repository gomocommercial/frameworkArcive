//
//  LDCSDABrowserTransitionManager.h
//  LDCSDivinationAdviserSDK-LDCSDA
//
//  Created by 邝路平 on 2019/10/27.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LDCSDABrowserController.h"

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDABrowserTransitionManager : NSObject<UIViewControllerAnimatedTransitioning>

@property (nonatomic,weak) LDCSDABrowserController *browserVc;


@end

NS_ASSUME_NONNULL_END
