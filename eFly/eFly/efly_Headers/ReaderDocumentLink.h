//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSObject-Protocol.h"

@class NSString;

@interface ReaderDocumentLink : NSObject <NSObject>
{
    struct CGPDFDictionary *_dictionary;
    struct CGRect _rect;
}

+ (id)newWithRect:(struct CGRect)arg1 dictionary:(struct CGPDFDictionary *)arg2;
@property(readonly, nonatomic) struct CGPDFDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)initWithRect:(struct CGRect)arg1 dictionary:(struct CGPDFDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

