//
//  LDCSDAConsultChatModel.h
//  AFNetworking
//
//  Created by 邝路平 on 2019/10/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LDConsultChatMsgType) {
    LDConsultChatMsgType_Text,
    LDConsultChatMsgType_Video,
    LDConsultChatMsgType_Image,
    LDConsultChatMsgType_Hot,
    LDConsultChatMsgType_FillMessage,
    LDConsultChatMsgType_History,
    LDConsultChatMsgType_CheckInfomation,
    LDConsultChatMsgType_CheckBalance,

};

typedef NS_ENUM(NSInteger, LDConsultChatSendType) {
    LDConsultChatSendType_Sending,
    LDConsultChatSendType_Failed,
    LDConsultChatSendType_Done
};


extern NSString *const LDConsultCell_Mine;
extern NSString *const LDConsultCell_Teacher;
extern NSString *const LDConsultCell_Mine_Image;
extern NSString *const LDConsultCell_Teacher_Image;
extern NSString *const LDConsultCell_Hot;
extern NSString *const LDConsultCell_FillMessage;

extern BOOL lDmessageCanAction;
extern CGFloat const LDConsultCellWidthMul;

@interface LDCSDAConsultChatModel : NSObject

@property (nonatomic,strong) NSString *createTime;
@property (nonatomic,assign) BOOL isFromMine;
@property (nonatomic,strong) NSString *avatorImageUrl;
@property (nonatomic,strong) NSString *contentStr;
@property (nonatomic,strong) NSString *videoUrl;
@property (nonatomic,strong) NSString *imageUrl;
@property (nonatomic,assign) LDConsultChatMsgType chatType;
@property (nonatomic,assign) LDConsultChatSendType sendType;

@property (nonatomic,strong) NSString *cellIdentifier;

@property (nonatomic,strong) UIImage *coverImage;
@property (nonatomic, strong) NSArray<NSString*> *hotMessages;

@end

NS_ASSUME_NONNULL_END
