//
//  LogEventsUtil.h
//  LogObjcFramework
//
//  Copyright © 2019年 INFOCITY,Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : int8_t {
  SendEventOptionFirebase = 1,
  SendEventOptionGoogle = 1 << 1,
  SendEventOptionFacebook = 1 << 2,
  SendEventOptionFlurry = 1 << 3,
  SendEventOptionAll = (SendEventOptionFirebase|SendEventOptionGoogle|SendEventOptionFacebook|SendEventOptionFlurry),
  SendEventOptionNone = 0
} SendEventOption;

@interface LogEventsUtil : NSObject

@property (class, nonatomic, copy) void (^ _Nullable logForFirebase)(NSString* _Nonnull name, NSDictionary* _Nullable param);
@property (class, nonatomic, copy) void (^ _Nullable logForGoogle)(NSString* _Nonnull name, NSString* _Nonnull category, NSDictionary* _Nullable param);
@property (class, nonatomic, copy) void (^ _Nullable logForFacebook)(NSString* _Nonnull name, NSDictionary* _Nullable param);
@property (class, nonatomic, copy) void (^ _Nullable logForFlurry)(NSString* _Nonnull name, NSDictionary* _Nullable param);

+ (void)sendEventLog:(nonnull NSString*)eventName
               param:(nullable NSDictionary*)param
              option:(SendEventOption)option;

+ (void)sendEventLog:(nonnull NSString*)eventName
            category:(nonnull NSString*)category
               param:(nullable NSDictionary*)param
              option:(SendEventOption)option;

+ (void)sendEventLog:(nonnull NSString*)eventName param:(nullable NSDictionary*)param;

@end
