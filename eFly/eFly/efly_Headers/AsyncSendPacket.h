//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface AsyncSendPacket : NSObject
{
    NSData *buffer;
    NSData *address;
    double timeout;
    long long tag;
}

- (void)dealloc;
- (id)initWithData:(id)arg1 address:(id)arg2 timeout:(double)arg3 tag:(long long)arg4;

@end

