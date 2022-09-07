//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKDataJson.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface TuSDKNKDownloadItem : TuSDKDataJson <NSCoding>
{
    unsigned long long _idt;
    NSString *_key;
    long long _status;
    double _progress;
    NSString *_userId;
    long long _type;
    NSString *_fileName;
    NSString *_fileId;
}

+ (id)typeActWithType:(long long)arg1;
@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long idt; // @synthesize idt=_idt;
- (void).cxx_destruct;
- (id)jsonStatusChangeData;
- (id)jsonData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localTempPath;
- (id)localDownloadPath;
@property(readonly, nonatomic) NSString *typeAct;

@end

