//
//  LDCSDPlaceHolderTextView.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDCSDAPlaceHolderTextView : UITextView

@property (nonatomic,strong) NSString *placeholder;
@property (nonatomic,strong) UIColor *placeholderColor;
@property (nonatomic,assign) NSUInteger limitNum;

@end

NS_ASSUME_NONNULL_END
