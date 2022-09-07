//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface TuSDKNKNetworkArg : NSObject
{
    _Bool _downFile;
    NSError *_error;
    long long _returnCode;
    NSObject *_data;
    id _target;
    SEL _action;
}

+ (id)initWithTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) _Bool downFile; // @synthesize downFile=_downFile;
@property(retain, nonatomic) NSObject *data; // @synthesize data=_data;
@property(nonatomic) long long returnCode; // @synthesize returnCode=_returnCode;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)dataParseWithBlock:(CDUnknownBlockType)arg1 finish:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)dataParseWithBlock:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)dataParseWithBlock:(CDUnknownBlockType)arg1 finish:(CDUnknownBlockType)arg2;
- (void)dataParseWithBlock:(CDUnknownBlockType)arg1;
- (void)onNetworkRequestFinishedWithOperation:(id)arg1;
- (id)getSubDataWithKey:(id)arg1;
- (id)getDictionaryData;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

