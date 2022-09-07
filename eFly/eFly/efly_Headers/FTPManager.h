//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class NSInputStream, NSOutputStream, NSString;

@interface FTPManager : NSObject <NSStreamDelegate>
{
    NSInputStream *fileStream;
    NSOutputStream *networkStream;
    NSString *ip;
    NSString *port;
    NSString *userName;
    NSString *password;
    unsigned char _buffer[32768];
    CDUnknownBlockType _resultBlock;
    unsigned long long _bufferOffset;
    unsigned long long _bufferLimit;
}

@property(nonatomic) unsigned long long bufferLimit; // @synthesize bufferLimit=_bufferLimit;
@property(nonatomic) unsigned long long bufferOffset; // @synthesize bufferOffset=_bufferOffset;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (void).cxx_destruct;
- (id)smartURLForString:(id)arg1;
- (void)stopSend;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)startSendFirmware:(id)arg1;
- (id)desUrl;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

