/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_subclauses;
}

- (id)_generateMulticlauseStringInContext:(id)arg1;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;
- (BOOL)isOrScoped;

@end