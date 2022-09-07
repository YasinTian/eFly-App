//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKAOImageDecrypt.h"

@interface TuSDKAOJPGDecrypt : TuSDKAOImageDecrypt
{
    unsigned long long _mDQT1Length;
    unsigned long long _mDQT2Length;
    unsigned long long _mSOF0Length;
    unsigned long long _mDHTLength;
    unsigned long long _mSOSLength;
}

- (void)writeHeaderArg:(unsigned long long)arg1 length:(unsigned long long)arg2 type:(const char *)arg3 typeLength:(unsigned long long)arg4 output:(id)arg5;
- (unsigned long long)dataSpaceWithIndex:(unsigned long long)arg1;
- (void)matchType:(unsigned char)arg1 length:(unsigned long long)arg2;
- (void)readHeaderArgs:(unsigned long long)arg1;
- (void)cryptStream:(id)arg1;
- (_Bool)matchHeader;

@end

