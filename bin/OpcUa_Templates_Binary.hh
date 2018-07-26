// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R3A
// for AvdootChalke (avdootchalke@avdootchalke-VirtualBox) on Thu Jul 26 15:22:27 2018

// Copyright (c) 2000-2017 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef OpcUa__Templates__Binary_HH
#define OpcUa__Templates__Binary_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include <TTCN3.hh>
#include "OpcUa_Types_Binary.hh"

#if TTCN3_VERSION != 60300
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.\
 Run make clean and rebuild the project if the version of the compiler changed recently.
#endif

#ifndef LINUX
#error This file should be compiled on LINUX
#endif

namespace OpcUa__Templates__Binary {

/* Function prototypes */

extern OpcUa__Types__Binary::String_template tr__String(const CHARSTRING& stringValue);
extern OpcUa__Types__Binary::ByteString_template tr__ByteString(const OpcUa__Types__Binary::ByteArray& arrayValue);
extern OpcUa__Types__Binary::NodeId_template tr__NodeIdTwoByte(const INTEGER& nodeValue);
extern OpcUa__Types__Binary::NodeId_template tr__NodeIdFourByte(const INTEGER& nameSpace, const INTEGER& nodeValue);
extern OpcUa__Types__Binary::NodeId_template tr__NodeIdNumeric(const INTEGER& nameSpace, const INTEGER& nodeValue);
extern OpcUa__Types__Binary::NodeId_template tr__NodeIdString(const INTEGER& nameSpace, const OpcUa__Types__Binary::String& nodeValue);
extern OpcUa__Types__Binary::NodeId_template tr__NodeIdGuid(const INTEGER& nameSpace, const OpcUa__Types__Binary::Guid& nodeValue);
extern OpcUa__Types__Binary::NodeId_template tr__NodeIdByteString(const INTEGER& nameSpace, const OpcUa__Types__Binary::ByteString& nodeValue);
extern OpcUa__Types__Binary::Variant_template tr__Variant(const OpcUa__Types__Binary::VariantSingleValue& ValueSingle);
extern OpcUa__Types__Binary::Variant_template tr__VariantArray(const INTEGER& arrayLength, const OpcUa__Types__Binary::VariantArrayValue& ValueArray);
extern OpcUa__Types__Binary::ListOfBoolean_template tr__ListOfBoolean(const OpcUa__Types__Binary::BooleanArray& values);
extern OpcUa__Types__Binary::ListOfSByte_template tr__ListOfSByte(const OpcUa__Types__Binary::SByteArray& values);
extern OpcUa__Types__Binary::ListOfByte_template tr__ListOfByte(const OpcUa__Types__Binary::ByteArray& values);
extern OpcUa__Types__Binary::ListOfInt16_template tr__ListOfInt16(const OpcUa__Types__Binary::Int16Array& values);
extern OpcUa__Types__Binary::ListOfUInt16_template tr__ListOfUInt16(const OpcUa__Types__Binary::UInt16Array& values);
extern OpcUa__Types__Binary::ListOfInt32_template tr__ListOfInt32(const OpcUa__Types__Binary::Int32Array& values);
extern OpcUa__Types__Binary::ListOfUInt32_template tr__ListOfUInt32(const OpcUa__Types__Binary::UInt32Array& values);
extern OpcUa__Types__Binary::ListOfInt64_template tr__ListOfInt64(const OpcUa__Types__Binary::Int64Array& values);
extern OpcUa__Types__Binary::ListOfUInt64_template tr__ListOfUInt64(const OpcUa__Types__Binary::UInt64Array& values);
extern OpcUa__Types__Binary::ListOfFloat_template tr__ListOfFloat(const OpcUa__Types__Binary::FloatArray& values);
extern OpcUa__Types__Binary::ListOfDouble_template tr__ListOfDouble(const OpcUa__Types__Binary::DoubleArray& values);
extern OpcUa__Types__Binary::ListOfDateTime_template tr__ListOfDateTime(const OpcUa__Types__Binary::DateTimeArray& values);
extern OpcUa__Types__Binary::ListOfUtcTime_template tr__ListOfUtcTime(const OpcUa__Types__Binary::UtcTimeArray& values);
extern OpcUa__Types__Binary::ListOfCounter_template tr__ListOfCounter(const OpcUa__Types__Binary::CounterArray& values);
extern OpcUa__Types__Binary::ListOfIntegerId_template tr__ListOfIntegerId(const OpcUa__Types__Binary::IntegerIdArray& values);
extern OpcUa__Types__Binary::ListOfLocaleId_template tr__ListOfLocaleId(const OpcUa__Types__Binary::LocaleIdArray& values);
extern OpcUa__Types__Binary::ListOfContinuationPoint_template tr__ListOfContinuationPoint(const OpcUa__Types__Binary::ContinuationPointArray& values);
extern OpcUa__Types__Binary::ListOfString_template tr__ListOfString(const OpcUa__Types__Binary::StringArray& values);
extern OpcUa__Types__Binary::ListOfGuid_template tr__ListOfGuid(const OpcUa__Types__Binary::GuidArray& values);
extern OpcUa__Types__Binary::ListOfByteString_template tr__ListOfByteString(const OpcUa__Types__Binary::ByteStringArray& values);
extern OpcUa__Types__Binary::ListOfXmlElement_template tr__ListOfXmlElement(const OpcUa__Types__Binary::XmlElementArray& values);
extern OpcUa__Types__Binary::ListOfNodeId_template tr__ListOfNodeId(const OpcUa__Types__Binary::NodeIdArray& values);
extern OpcUa__Types__Binary::ListOfExpandedNodeId_template tr__ListOfExpandedNodeId(const OpcUa__Types__Binary::ExpandedNodeIdArray& values);
extern OpcUa__Types__Binary::ListOfStatusCode_template tr__ListOfStatusCode(const OpcUa__Types__Binary::StatusCodeArray& values);
extern OpcUa__Types__Binary::ListOfDiagnosticInfo_template tr__ListOfDiagnosticInfo(const OpcUa__Types__Binary::DiagnosticInfoArray& values);
extern OpcUa__Types__Binary::ListOfQualifiedName_template tr__ListOfQualifiedName(const OpcUa__Types__Binary::QualifiedNameArray& values);
extern OpcUa__Types__Binary::ListOfLocalizedText_template tr__ListOfLocalizedText(const OpcUa__Types__Binary::LocalizedTextArray& values);
extern OpcUa__Types__Binary::ListOfExtensionObject_template tr__ListOfExtensionObject(const OpcUa__Types__Binary::ExtensionObjectArray& values);
extern OpcUa__Types__Binary::ListOfVariant_template tr__ListOfVariant(const OpcUa__Types__Binary::VariantArray& values);
extern OpcUa__Types__Binary::ListOfDataValue_template tr__ListOfDataValue(const OpcUa__Types__Binary::DataValueArray& values);
extern OpcUa__Types__Binary::ListOfDecimal_template tr__ListOfDecimal(const OpcUa__Types__Binary::DecimalArray& values);
extern OpcUa__Types__Binary::ListOfEnumValueType_template tr__ListOfEnumValueType(const OpcUa__Types__Binary::EnumValueTypeArray& values);
extern OpcUa__Types__Binary::ListOfEnumField_template tr__ListOfEnumField(const OpcUa__Types__Binary::EnumFieldArray& values);
extern OpcUa__Types__Binary::ListOfExtensibleParameter_template tr__ListOfExtensibleParameter(const OpcUa__Types__Binary::ExtensibleParameterArray& values);
extern OpcUa__Types__Binary::ListOfApplicationDescription_template tr__ListOfApplicationDescription(const OpcUa__Types__Binary::ApplicationDescriptionArray& values);
extern OpcUa__Types__Binary::ListOfBrowseResult_template tr__ListOfBrowseResult(const OpcUa__Types__Binary::BrowseResultArray& values);
extern OpcUa__Types__Binary::ListOfContentFilterElement_template tr__ListOfContentFilterElement(const OpcUa__Types__Binary::ContentFilterElementArray& values);
extern OpcUa__Types__Binary::ListOfContentFilterElementResult_template tr__ListOfContentFilterElementResult(const OpcUa__Types__Binary::ContentFilterElementResultArray& values);
extern OpcUa__Types__Binary::ListOfSimpleAttributeOperand_template tr__ListOfSimpleAttributeOperand(const OpcUa__Types__Binary::SimpleAttributeOperandArray& values);
extern OpcUa__Types__Binary::ListOfEndpointDescription_template tr__ListOfEndpointDescription(const OpcUa__Types__Binary::EndpointDescriptionArray& values);
extern OpcUa__Types__Binary::ListOfMonitoringParameters_template tr__ListOfMonitoringParameters(const OpcUa__Types__Binary::MonitoringParametersArray& values);
extern OpcUa__Types__Binary::ListOfGenericAttributeValue_template tr__ListOfGenericAttributeValue(const OpcUa__Types__Binary::GenericAttributeValueArray& values);
extern OpcUa__Types__Binary::ListOfMonitoredItemNotification_template tr__ListOfMonitoredItemNotification(const OpcUa__Types__Binary::MonitoredItemNotificationArray& values);
extern OpcUa__Types__Binary::ListOfEventFieldList_template tr__ListOfEventFieldList(const OpcUa__Types__Binary::EventFieldListArray& values);
extern OpcUa__Types__Binary::ListOfQueryDataSet_template tr__ListOfQueryDataSet(const OpcUa__Types__Binary::QueryDataSetArray& values);
extern OpcUa__Types__Binary::ListOfReadValueId_template tr__ListOfReadValueId(const OpcUa__Types__Binary::ReadValueIdArray& values);
extern OpcUa__Types__Binary::ListOfReferenceDescription_template tr__ListOfReferenceDescription(const OpcUa__Types__Binary::ReferenceDescriptionArray& values);
extern OpcUa__Types__Binary::ListOfRelativePathElement_template tr__ListOfRelativePathElement(const OpcUa__Types__Binary::RelativePathElementArray& values);
extern OpcUa__Types__Binary::ListOfApplicationInstanceCertificate_template tr__ListOfApplicationInstanceCertificate(const OpcUa__Types__Binary::ApplicationInstanceCertificateArray& values);
extern OpcUa__Types__Binary::ListOfChannelSecurityToken_template tr__ListOfChannelSecurityToken(const OpcUa__Types__Binary::ChannelSecurityTokenArray& values);
extern OpcUa__Types__Binary::ListOfUserTokenPolicy_template tr__ListOfUserTokenPolicy(const OpcUa__Types__Binary::UserTokenPolicyArray& values);
extern OpcUa__Types__Binary::ListOfServerOnNetwork_template tr__ListOfServerOnNetwork(const OpcUa__Types__Binary::ServerOnNetworkArray& values);
extern OpcUa__Types__Binary::ListOfAddNodesItem_template tr__ListOfAddNodesItem(const OpcUa__Types__Binary::AddNodesItemArray& values);
extern OpcUa__Types__Binary::ListOfAddNodesResult_template tr__ListOfAddNodesResult(const OpcUa__Types__Binary::AddNodesResultArray& values);
extern OpcUa__Types__Binary::ListOfAddReferencesItem_template tr__ListOfAddReferencesItem(const OpcUa__Types__Binary::AddReferencesItemArray& values);
extern OpcUa__Types__Binary::ListOfDeleteNodesItem_template tr__ListOfDeleteNodesItem(const OpcUa__Types__Binary::DeleteNodesItemArray& values);
extern OpcUa__Types__Binary::ListOfDeleteReferencesItem_template tr__ListOfDeleteReferencesItem(const OpcUa__Types__Binary::DeleteReferencesItemArray& values);
extern OpcUa__Types__Binary::ListOfSignedSoftwareCertificate_template tr__ListOfSignedSoftwareCertificate(const OpcUa__Types__Binary::SignedSoftwareCertificateArray& values);
extern OpcUa__Types__Binary::ListOfBrowseDescription_template tr__ListOfBrowseDescription(const OpcUa__Types__Binary::BrowseDescriptionArray& values);
extern OpcUa__Types__Binary::ListOfBrowsePath_template tr__ListOfBrowsePath(const OpcUa__Types__Binary::BrowsePathArray& values);
extern OpcUa__Types__Binary::ListOfBrowsePathResult_template tr__ListOfBrowsePathResult(const OpcUa__Types__Binary::BrowsePathResultArray& values);
extern OpcUa__Types__Binary::ListOfBrowsePathTarget_template tr__ListOfBrowsePathTarget(const OpcUa__Types__Binary::BrowsePathTargetArray& values);
extern OpcUa__Types__Binary::ListOfNodeTypeDescription_template tr__ListOfNodeTypeDescription(const OpcUa__Types__Binary::NodeTypeDescriptionArray& values);
extern OpcUa__Types__Binary::ListOfQueryDataDescription_template tr__ListOfQueryDataDescription(const OpcUa__Types__Binary::QueryDataDescriptionArray& values);
extern OpcUa__Types__Binary::ListOfParsingResult_template tr__ListOfParsingResult(const OpcUa__Types__Binary::ParsingResultArray& values);
extern OpcUa__Types__Binary::ListOfHistoryReadValueId_template tr__ListOfHistoryReadValueId(const OpcUa__Types__Binary::HistoryReadValueIdArray& values);
extern OpcUa__Types__Binary::ListOfHistoryReadResult_template tr__ListOfHistoryReadResult(const OpcUa__Types__Binary::HistoryReadResultArray& values);
extern OpcUa__Types__Binary::ListOfWriteValue_template tr__ListOfWriteValue(const OpcUa__Types__Binary::WriteValueArray& values);
extern OpcUa__Types__Binary::ListOfHistoryUpdateResult_template tr__ListOfHistoryUpdateResult(const OpcUa__Types__Binary::HistoryUpdateResultArray& values);
extern OpcUa__Types__Binary::ListOfCallMethodRequest_template tr__ListOfCallMethodRequest(const OpcUa__Types__Binary::CallMethodRequestArray& values);
extern OpcUa__Types__Binary::ListOfCallMethodResult_template tr__ListOfCallMethodResult(const OpcUa__Types__Binary::CallMethodResultArray& values);
extern OpcUa__Types__Binary::ListOfMonitoredItemCreateRequest_template tr__ListOfMonitoredItemCreateRequest(const OpcUa__Types__Binary::MonitoredItemCreateRequestArray& values);
extern OpcUa__Types__Binary::ListOfMonitoredItemCreateResult_template tr__ListOfMonitoredItemCreateResult(const OpcUa__Types__Binary::MonitoredItemCreateResultArray& values);
extern OpcUa__Types__Binary::ListOfMonitoredItemModifyRequest_template tr__ListOfMonitoredItemModifyRequest(const OpcUa__Types__Binary::MonitoredItemModifyRequestArray& values);
extern OpcUa__Types__Binary::ListOfMonitoredItemModifyResult_template tr__ListOfMonitoredItemModifyResult(const OpcUa__Types__Binary::MonitoredItemModifyResultArray& values);
extern OpcUa__Types__Binary::ListOfSubscriptionAcknowledgement_template tr__ListOfSubscriptionAcknowledgement(const OpcUa__Types__Binary::SubscriptionAcknowledgementArray& values);
extern OpcUa__Types__Binary::ListOfTransferResult_template tr__ListOfTransferResult(const OpcUa__Types__Binary::TransferResultArray& values);
extern OpcUa__Types__Binary::MessageChunk_template tr__MessageHello(const OpcUa__Types__Binary::MessageHeader& header, const OpcUa__Types__Binary::HelloMessage& body);
extern OpcUa__Types__Binary::MessageChunk_template tr__MessageAck(const OpcUa__Types__Binary::MessageHeader& header, const OpcUa__Types__Binary::AckMessage& body);
extern OpcUa__Types__Binary::MessageChunk_template tr__MessageReverseHello(const OpcUa__Types__Binary::MessageHeader& header, const OpcUa__Types__Binary::ReverseHelloMessage& body);
extern OpcUa__Types__Binary::MessageChunk_template tr__MessageError(const OpcUa__Types__Binary::MessageHeader& header, const OpcUa__Types__Binary::ErrorMessage& body);
extern OpcUa__Types__Binary::MessageChunk_template tr__MessageOpenSecureChannel(const OpcUa__Types__Binary::MessageHeader& header, const INTEGER& securityChannelId, const OpcUa__Types__Binary::ListOfByte& securePolicyUri, const OpcUa__Types__Binary::ListOfByte& senderCertificate, const OpcUa__Types__Binary::ListOfByte& receiverCertificateThumbprint, const OpcUa__Types__Binary::SequenceHeader& sequenceHeader, const OCTETSTRING& body);
extern OpcUa__Types__Binary::MessageChunk_template tr__MessageCloseSecureChannel(const OpcUa__Types__Binary::MessageHeader& header, const INTEGER& securityChannelId, const INTEGER& securityTokenId, const OpcUa__Types__Binary::SequenceHeader& sequenceHeader, const OCTETSTRING& body);
extern OpcUa__Types__Binary::MessageChunk_template tr__MessageService(const OpcUa__Types__Binary::MessageHeader& header, const INTEGER& securityChannelId, const INTEGER& securityTokenId, const OpcUa__Types__Binary::SequenceHeader& sequenceHeader, const OCTETSTRING& body);
extern OpcUa__Types__Binary::ServiceBody_template tr__ServiceBody(const INTEGER& namespaceIndex, const INTEGER& , const OpcUa__Types__Binary::ServiceList& service);

/* Global variable declarations */

extern const OpcUa__Types__Binary::String_template& tr__StringNull;
extern const OpcUa__Types__Binary::ByteString_template& tr__ByteStringNull;
extern const OpcUa__Types__Binary::NullArray_template& tr__NullArray;
extern const OpcUa__Types__Binary::ListOfBoolean_template& tr__ListOfBooleanNull;
extern const OpcUa__Types__Binary::ListOfSByte_template& tr__ListOfSByteNull;
extern const OpcUa__Types__Binary::ListOfByte_template& tr__ListOfByteNull;
extern const OpcUa__Types__Binary::ListOfInt16_template& tr__ListOfInt16Null;
extern const OpcUa__Types__Binary::ListOfUInt16_template& tr__ListOfUInt16Null;
extern const OpcUa__Types__Binary::ListOfInt32_template& tr__ListOfInt32Null;
extern const OpcUa__Types__Binary::ListOfUInt32_template& tr__ListOfUInt32Null;
extern const OpcUa__Types__Binary::ListOfInt64_template& tr__ListOfInt64Null;
extern const OpcUa__Types__Binary::ListOfUInt64_template& tr__ListOfUInt64Null;
extern const OpcUa__Types__Binary::ListOfFloat_template& tr__ListOfFloatNull;
extern const OpcUa__Types__Binary::ListOfDouble_template& tr__ListOfDoubleNull;
extern const OpcUa__Types__Binary::ListOfDateTime_template& tr__ListOfDateTimeNull;
extern const OpcUa__Types__Binary::ListOfUtcTime_template& tr__ListOfUtcTimeNull;
extern const OpcUa__Types__Binary::ListOfCounter_template& tr__ListOfCounterNull;
extern const OpcUa__Types__Binary::ListOfIntegerId_template& tr__ListOfIntegerIdNull;
extern const OpcUa__Types__Binary::ListOfLocaleId_template& tr__ListOfLocaleIdNull;
extern const OpcUa__Types__Binary::ListOfContinuationPoint_template& tr__ListOfContinuationPointNull;
extern const OpcUa__Types__Binary::ListOfString_template& tr__ListOfStringNull;
extern const OpcUa__Types__Binary::ListOfGuid_template& tr__ListOfGuidNull;
extern const OpcUa__Types__Binary::ListOfByteString_template& tr__ListOfByteStringNull;
extern const OpcUa__Types__Binary::ListOfXmlElement_template& tr__ListOfXmlElementNull;
extern const OpcUa__Types__Binary::ListOfNodeId_template& tr__ListOfNodeIdNull;
extern const OpcUa__Types__Binary::ListOfExpandedNodeId_template& tr__ListOfExpandedNodeIdNull;
extern const OpcUa__Types__Binary::ListOfStatusCode_template& tr__ListOfStatusCodeNull;
extern const OpcUa__Types__Binary::ListOfDiagnosticInfo_template& tr__ListOfDiagnosticInfoNull;
extern const OpcUa__Types__Binary::ListOfQualifiedName_template& tr__ListOfQualifiedNameNull;
extern const OpcUa__Types__Binary::ListOfLocalizedText_template& tr__ListOfLocalizedTextNull;
extern const OpcUa__Types__Binary::ListOfExtensionObject_template& tr__ListOfExtensionObjectNull;
extern const OpcUa__Types__Binary::ListOfVariant_template& tr__ListOfVariantNull;
extern const OpcUa__Types__Binary::ListOfDataValue_template& tr__ListOfDataValueNull;
extern const OpcUa__Types__Binary::ListOfDecimal_template& tr__ListOfDecimalNull;
extern const OpcUa__Types__Binary::ListOfEnumValueType_template& tr__ListOfEnumValueTypeNull;
extern const OpcUa__Types__Binary::ListOfEnumField_template& tr__ListOfEnumFieldNull;
extern const OpcUa__Types__Binary::ListOfExtensibleParameter_template& tr__ListOfExtensibleParameterNull;
extern const OpcUa__Types__Binary::ListOfApplicationDescription_template& tr__ListOfApplicationDescriptionNull;
extern const OpcUa__Types__Binary::ListOfBrowseResult_template& tr__ListOfBrowseResultNull;
extern const OpcUa__Types__Binary::ListOfContentFilterElement_template& tr__ListOfContentFilterElementNull;
extern const OpcUa__Types__Binary::ListOfContentFilterElementResult_template& tr__ListOfContentFilterElementResultNull;
extern const OpcUa__Types__Binary::ListOfSimpleAttributeOperand_template& tr__ListOfSimpleAttributeOperandNull;
extern const OpcUa__Types__Binary::ListOfEndpointDescription_template& tr__ListOfEndpointDescriptionNull;
extern const OpcUa__Types__Binary::ListOfMonitoringParameters_template& tr__ListOfMonitoringParametersNull;
extern const OpcUa__Types__Binary::ListOfGenericAttributeValue_template& tr__ListOfGenericAttributeValueNull;
extern const OpcUa__Types__Binary::ListOfMonitoredItemNotification_template& tr__ListOfMonitoredItemNotificationNull;
extern const OpcUa__Types__Binary::ListOfEventFieldList_template& tr__ListOfEventFieldListNull;
extern const OpcUa__Types__Binary::ListOfQueryDataSet_template& tr__ListOfQueryDataSetNull;
extern const OpcUa__Types__Binary::ListOfReadValueId_template& tr__ListOfReadValueIdNull;
extern const OpcUa__Types__Binary::ListOfReferenceDescription_template& tr__ListOfReferenceDescriptionNull;
extern const OpcUa__Types__Binary::ListOfRelativePathElement_template& tr__ListOfRelativePathElementNull;
extern const OpcUa__Types__Binary::ListOfApplicationInstanceCertificate_template& tr__ListOfApplicationInstanceCertificateNull;
extern const OpcUa__Types__Binary::ListOfChannelSecurityToken_template& tr__ListOfChannelSecurityTokenNull;
extern const OpcUa__Types__Binary::ListOfUserTokenPolicy_template& tr__ListOfUserTokenPolicyNull;
extern const OpcUa__Types__Binary::ListOfServerOnNetwork_template& tr__ListOfServerOnNetworkNull;
extern const OpcUa__Types__Binary::ListOfAddNodesItem_template& tr__ListOfAddNodesItemNull;
extern const OpcUa__Types__Binary::ListOfAddNodesResult_template& tr__ListOfAddNodesResultNull;
extern const OpcUa__Types__Binary::ListOfAddReferencesItem_template& tr__ListOfAddReferencesItemNull;
extern const OpcUa__Types__Binary::ListOfDeleteNodesItem_template& tr__ListOfDeleteNodesItemNull;
extern const OpcUa__Types__Binary::ListOfDeleteReferencesItem_template& tr__ListOfDeleteReferencesItemNull;
extern const OpcUa__Types__Binary::ListOfSignedSoftwareCertificate_template& tr__ListOfSignedSoftwareCertificateNull;
extern const OpcUa__Types__Binary::ListOfBrowseDescription_template& tr__ListOfBrowseDescriptionNull;
extern const OpcUa__Types__Binary::ListOfBrowsePath_template& tr__ListOfBrowsePathNull;
extern const OpcUa__Types__Binary::ListOfBrowsePathResult_template& tr__ListOfBrowsePathResultNull;
extern const OpcUa__Types__Binary::ListOfBrowsePathTarget_template& tr__ListOfBrowsePathTargetNull;
extern const OpcUa__Types__Binary::ListOfNodeTypeDescription_template& tr__ListOfNodeTypeDescriptionNull;
extern const OpcUa__Types__Binary::ListOfQueryDataDescription_template& tr__ListOfQueryDataDescriptionNull;
extern const OpcUa__Types__Binary::ListOfParsingResult_template& tr__ListOfParsingResultNull;
extern const OpcUa__Types__Binary::ListOfHistoryReadValueId_template& tr__ListOfHistoryReadValueIdNull;
extern const OpcUa__Types__Binary::ListOfHistoryReadResult_template& tr__ListOfHistoryReadResultNull;
extern const OpcUa__Types__Binary::ListOfWriteValue_template& tr__ListOfWriteValueNull;
extern const OpcUa__Types__Binary::ListOfHistoryUpdateResult_template& tr__ListOfHistoryUpdateResultNull;
extern const OpcUa__Types__Binary::ListOfCallMethodRequest_template& tr__ListOfCallMethodRequestNull;
extern const OpcUa__Types__Binary::ListOfCallMethodResult_template& tr__ListOfCallMethodResultNull;
extern const OpcUa__Types__Binary::ListOfMonitoredItemCreateRequest_template& tr__ListOfMonitoredItemCreateRequestNull;
extern const OpcUa__Types__Binary::ListOfMonitoredItemCreateResult_template& tr__ListOfMonitoredItemCreateResultNull;
extern const OpcUa__Types__Binary::ListOfMonitoredItemModifyRequest_template& tr__ListOfMonitoredItemModifyRequestNull;
extern const OpcUa__Types__Binary::ListOfMonitoredItemModifyResult_template& tr__ListOfMonitoredItemModifyResultNull;
extern const OpcUa__Types__Binary::ListOfSubscriptionAcknowledgement_template& tr__ListOfSubscriptionAcknowledgementNull;
extern const OpcUa__Types__Binary::ListOfTransferResult_template& tr__ListOfTransferResultNull;
extern const OpcUa__Types__Binary::MessageHeader_template& tr__HeaderHello;
extern const OpcUa__Types__Binary::MessageHeader_template& tr__HeaderAck;
extern const OpcUa__Types__Binary::MessageHeader_template& tr__HeaderError;
extern const OpcUa__Types__Binary::MessageHeader_template& tr__HeaderReverseHello;
extern const OpcUa__Types__Binary::MessageHeader_template& tr__HeaderOpenSecureChannel;
extern const OpcUa__Types__Binary::MessageHeader_template& tr__HeaderCloseSecureChannel;
extern const OpcUa__Types__Binary::MessageHeader_template& tr__HeaderService;
extern const OpcUa__Types__Binary::MessageChunk_template& tr__UndefinedMessage;
extern TTCN_Module module_object;

} /* end of namespace */

#endif
